#include <iostream>

std::string box(int width, int height)
{
    std::string result;

    for (int count = 0; count < height; count++)
    {
        for (int i = 0; i < width; i++)
        {
            result += "*";
        }
        result += "\n";
    }

    return result;
}

std::string checkerboard(int width, int height)
{
    int count = 1, end = 0;
    std::string result;

    while (count <= height)
    {
        if (count % 2 != 0)
        {
            for (int i = 0; i < width; i += 2)
            {
                result += "*";
                if (end < width - 2)
                {
                    result += " ";
                }
                end += 2;
            }
            end = 0;
        }
        else
        {
            for (int i = 0; i <= width; i += 2)
            {
                result += " ";
                if (end <= width - 2)
                {
                    result += "*";
                }
                end += 2;
            }
            end = 0;
        }
        
        result += "\n";
        count++;
    }
    return result;
}

std::string cross (int size)
{
    std::string result;

    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
            if (col == row || col == (size + 1 - row))
            {
                result += "*";
            }
            else
            {
                result += " ";
            }
        }
        result += "\n";
    }
    return result;
}

std::string lower(int length)
{
    std::string result;

    for (int col = 1; col <= length; col++)
    {
        for (int row = 1; row <= col; row++)
        {   
            result += "*";
        }
        result += "\n"; 
    }
    return result;
}

std::string upper(int length)
{
    std::string result;
    
    for (int row = 0; row < length; row++)
    {
        for (int space = 0; space < row; space++)
        {
            result += " ";
        }
        for (int col = 0; col < length - row; col++)
        {
            result += "*";
        }   
        result += "\n";
    }
    return result;
}

std::string trapezoid(int width, int height)
{
    std::string result;

    if (width < ((height * 2) - 1))
    {
        return "Impossible shape!";
    }
    else
    {
        for (int row = 1; row <= height; row++)
        {
            for (int col = 1; col <= width; col++)
            {
                if (row == col || ((col <= (width + 1 - row)) && (col > row)))
                {
                    result += "*";
                }
                else
                {
                    result += " ";
                }
            }
            result += "\n";
        }
    }
    return result;
}

std::string checkerboard3x3(int width, int height)
{
    std::string result;

    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            if (((col % 6 == 0) || (col % 6 == 1) || (col % 6 == 2)) && ((row % 6 == 0) || (row % 6 == 1) || (row % 6 == 2)))
            {
                result += "*";
            }
            else if ((col % 6 == 0) || (col % 6 == 1) || (col % 6 == 2))
            {
                result += " ";
            }
            else if (((col % 6 == 3) || (col % 6 == 4) || (col % 6 == 5)) && ((row % 6 == 3) || (row % 6 == 4) || (row % 6 == 5)))
            {
                result += "*";
            }
            else if ((col % 6 == 3) || (col % 6 == 4) || (col % 6 == 5))
            {
                result += " ";
            }
        }
        result += "\n";
    }
    return result;
}  