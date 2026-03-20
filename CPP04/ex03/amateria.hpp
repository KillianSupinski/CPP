class AMateria
{
protected:
    std::string _type;
    unsigned int _xp;
public:
    AMateria(std::string const & type);
    AMateria(AMateria const & src);
    virtual ~AMateria();
    AMateria& operator=(AMateria const & rhs);
    std::string const & getType() const;
    unsigned int getXP() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
}