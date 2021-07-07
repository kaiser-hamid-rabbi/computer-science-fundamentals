std::vector<std::string> names;
std::string input;
while (file >> input) // return file
{
    names.push_back(input);
}
for (std::string name : names)
{
    std::cout << name << "\n";
}