/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanylch <mdanylch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:34:36 by mdanylch          #+#    #+#             */
/*   Updated: 2019/06/03 17:43:28 by mdanylch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USEFULL_H
# define USEFULL_H
/*
**	int declaration
*/
# define INT2(a,b) int a,b;
# define INT3(a,b,c) int a,b,c;
# define INT4(a,b,c,d) int a,b,c,d;
# define INT5(a,b,c,d,e) int a,b,c,d,e;
# define INT6(a,b,c,d,e,f) int a,b,c,d,e,f;
# define INT7(a,b,c,d,e,f,g) int a,b,c,d,e,f,g;
# define INT8(a,b,c,d,e,f,g,h) int a,b,c,d,e,f,g,h;
/*
**	char declaration
*/
# define CHAR2(a,b) char a,b;
# define CHAR3(a,b,c) char a,b,c;
# define CHAR4(a,b,c,d) char a,b,c,d;
# define CHAR5(a,b,c,d,e) char a,b,c,d,e;
/*
**	int * declaration
*/
# define INTP2(a,b) int *a,*b;
# define INTP3(a,b,c) int *a,*b,*c;
# define INTP4(a,b,c,d) int *a,*b,*c,*d;
# define INTP5(a,b,c,d,e) int *a,*b,*c,*d,*e;
/*
**	char * declaration
*/
# define CHARP2(a,b) char *a,*b;
# define CHARP3(a,b,c) char *a,*b,*c;
# define CHARP4(a,b,c,d) char *a,*b,*c,*d;
# define CHARP5(a,b,c,d,e) char *a,*b,*c,*d,*e;
/*
**	initialization of variables
*/
# define INIT2(a,av,b,bv) a=av;b=bv;
# define INIT3(a,av,b,bv,c,cv) a=av;b=bv;c=cv;
# define INIT4(a,av,b,bv,c,cv,d,dv) a=av;b=bv;c=cv;d=dv;
# define INIT5(a,av,b,bv,c,cv,d,dv,e,ev) a=av;b=bv;c=cv;d=dv;e=ev;
# define INIT6(a,av,b,bv,c,cv,d,dv,e,ev,f,fv) a=av;b=bv;c=cv;d=dv;e=ev;f=fv;
/*
**	declaration of int array of size i and initialized whith 0s
*/
# define INTARRI1(a, i) int a[i] = {0};
# define INTARRI2(a, i, b, j) int a[i] = {0}, b[j] = {0};
# define INTARRI3(a, i, b, j, c, k) int a[i] = {0}, b[j] = {0}, c[k] = {0};
/*
**	declaration of char array of size i and initialized whith 0s
*/
# define CHARARRI1(a, i) char a[ia] = {0};
# define CHARIARR2(a, i, b, j) char a[i] = {0}, b[j] = {0};
# define CHARIARR3(a, i, b, j, c, k) char a[i] = {0}, b[j] = {0}, c[k] = {0};

/*
**		Examples for DO & IFTHEN
**	DO2(INT2(fd, r), CCHAR1(line));
**	DO2(FREE2(nds, line), y++);
**	IFTHEN(((fd = open(MAP->filename, O_RDONLY)) < 0), kill(NULL, errno));
*/
# define FREE2(a,b) free(a);free(b);
# define FREE3(a,b,c) free(a);free(b);free(c);
# define FREE4(a,b,c,d) free(a);free(b);free(c);free(d);

# define DO2(a,b) a;b;
# define DO3(a,b,c) a;b;c;
# define DO4(a,b,c,d) a;b;c;d;

# define IFTHEN(x, do) if (x) do;

#endif
