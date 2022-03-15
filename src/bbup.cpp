#include <iostream>
#include <boost/program_options.hpp>
#include <string>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
	po::options_description desc("Options");
	std::cout << "Configuring options" << std::endl;

	int local_n_quarter;
	int local_n_hour;
	int local_n_day;
	int local_n_week;
	int local_n_month;
	int local_n_year;
	int remote_n_quarter;
	int remote_n_hour;
	int remote_n_day;
	int remote_n_week;
	int remote_n_month;
	int remote_n_year;
	bool encrypt;
	std::string encrypt_pass;

	desc.add_options()
		("help", "Show this help message")
		("local-n-quarter", po::value<int>(&local_n_quarter)->default_value(4), "Number of quarterly backups to store (locally)")
		("local-n-hour", po::value<int>(&local_n_hour)->default_value(24), "Number of hourly backups to store (locally)")
		("local-n-day", po::value<int>(&local_n_day)->default_value(7), "Number of daily backups to store (locally)")
		("local-n-week", po::value<int>(&local_n_week)->default_value(5), "Number of weekly backups to store (locally)")
		("local-n-month", po::value<int>(&local_n_month)->default_value(12), "Number of monthly backups to store (locally)")
		("local-n-year", po::value<int>(&local_n_year)->default_value(3), "Number of yearly backups to store (locally)")
		("remote-n-quarter", po::value<int>(&remote_n_quarter)->default_value(4), "Number of quarterly backups to store (remotely)")
		("remote-n-hour", po::value<int>(&remote_n_hour)->default_value(24), "Number of hourly backups to store (remotely)")
		("remote-n-day", po::value<int>(&remote_n_day)->default_value(7), "Number of daily backups to store (remotely)")
		("remote-n-week", po::value<int>(&remote_n_week)->default_value(5), "Number of weekly backups to store (remotely)")
		("remote-n-month", po::value<int>(&remote_n_month)->default_value(12), "Number of monthly backups to store (remotely)")
		("remote-n-year", po::value<int>(&remote_n_year)->default_value(3), "Number of yearly backups to store (remotely)")
		("encrypt", po::value<bool>(&encrypt)->default_value(false), "Number of yearly backups to store (remotely)")
		("encrypt-pass", po::value<std::string>(&encrypt_pass)->default_value(""), "Number of yearly backups to store (remotely)")
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

	
	std::cout << "local_n_quarter: " <<  local_n_quarter << std::endl;
	std::cout << "local_n_hour: " <<  local_n_hour << std::endl;
	std::cout << "local_n_day: " <<  local_n_day << std::endl;
	std::cout << "local_n_week: " <<  local_n_week << std::endl;
	std::cout << "local_n_month: " <<  local_n_month << std::endl;
	std::cout << "local_n_year: " <<  local_n_year << std::endl;
	std::cout << "remote_n_quarter: " <<  remote_n_quarter << std::endl;
	std::cout << "remote_n_hour: " <<  remote_n_hour << std::endl;
	std::cout << "remote_n_day: " <<  remote_n_day << std::endl;
	std::cout << "remote_n_week: " <<  remote_n_week << std::endl;
	std::cout << "remote_n_month: " <<  remote_n_month << std::endl;
	std::cout << "remote_n_year: " <<  remote_n_year << std::endl;
}
