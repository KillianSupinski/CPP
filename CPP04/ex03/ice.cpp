class Ice : public AMateria
{
public:
    Ice() : AMateria("ice") {}
    Ice(Ice const & src) : AMateria(src) {};
    void use(ICharacter& target);
    AMateria* clone() const;
};