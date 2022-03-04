#include <iostream>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
	po::options_description desc("Options");
	std::cout << "Configuring options" << std::endl;
	desc.add_options()
		("help", "Show this help message")
		("local-n-day", po::value<int>(), "How many versions of the last day to keep (locally)")
		("remote-n-day", po::value<int>(), "How many versions of the last day to keep (remotely)")
	;
	po::variables_map options;
	std::cout << "Parsing options" << std::endl;
	po::store(po::parse_command_line(argc, argv, desc), options);
	std::cout << "Notifying" << std::endl;
	po::notify(options);

	std::cout << "Print help?" << std::endl;
	if (options.count("help")) {
		std::cout << desc << std::endl;
		return 1;
	}

	std::cout << "show local-n-day" << std::endl;
	if (options.count("local-n-day")) {
		std::cout << "local-n-day: " << options["local-n-day"].as<int>() << std::endl;
	}
}
