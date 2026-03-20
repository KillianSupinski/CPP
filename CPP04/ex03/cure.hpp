class Cure : public AMateria
{
public:
    Cure() : AMateria("cure") {}
    Cure(Cure const & src) : AMateria(src) {};
    void use(ICharacter& target);
    AMateria* clone() const;
};