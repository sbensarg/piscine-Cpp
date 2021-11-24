#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


class Sample1
{
private:
	/* data */
	int		_privatevar;
	void	_privatefinc(void) const;
	// Private attribute
    int salary;
public:

	// char	var1;
	// int		var2;
	// float	var3;

	// Sample1(char p1, int p2, float p3);
	// ~Sample1(void);
	// void ft_func(void);

	//float const pi;
//	int			var;
	//Sample1(float const f);
	Sample1(void);
	~Sample1(void);

	void ft_func(void) const; // A read-only function

	//getters and setters

	// Setter
    void setSalary(int s);
    // Getter
    int getSalary(void) const;

	
};



#endif