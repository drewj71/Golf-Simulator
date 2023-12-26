#pragma once

#include <iostream>
#include <string>

class User {
public:
	User (const std::string& username, const std::string& password);
	const std::string& getUsername() const;
	void setUsername(const std::string& userName);

	const std::string& getPassword() const;
	void setPassword(const std::string& password);

private:
	std::string username;
	std::string password;

};