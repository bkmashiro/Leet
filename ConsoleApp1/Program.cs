using System;
using System.Text;

namespace ConsoleApp1
{
    public class Program
    {
        //static int[] weights = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
        //static char[] mappings = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
        //static bool AnalyzeId(string s)
        //{
        //    string perfix = s.Substring(0, s.Length - 1);
        //    char appendix = s.Substring(s.Length - 1)[0];
        //    int[] vals = new int[17];
        //    int sum = 0;
        //    for (int i = 0; i < 17; i++)
        //    {
        //        if (int.TryParse(perfix.Substring(i, 1), out vals[i]))
        //        {
        //            vals[i] *= weights[i];
        //        }
        //        else
        //        {
        //            return false;
        //        }
        //        sum += vals[i];
        //    }
        //    sum %= 11;
        //    char checkChar = mappings[sum];
        //    if (checkChar == appendix)
        //    {
        //        return true;
        //    }
        //    else
        //    {
        //        return false;
        //    }

        //}
        //public static void Main()
        //{
        //    var v = DrawCircle(15);
        //    StringBuilder sb = new StringBuilder();
        //    for (int i = 0; i < v.GetLength(0); i++)
        //    {
        //        for (int j = 0; j < v.GetLength(1); j++)
        //        {
        //            if (v[i, j])
        //            {

        //                sb.Append("0");
        //            }
        //            else
        //            {
        //                sb.Append("_");
        //            }
        //        }
        //        sb.Append(Environment.NewLine);
        //    }
        //    Console.WriteLine(sb.ToString());
        //}


        //static bool[,] DrawCircle(int r)
        //{
        //    bool[,] ans = new bool[2 * r+2, 2 * r+2];
        //    int y = 0; 
        //    int rr = r * r;
        //    int r2 = 2 * r;
        //    byte[,] mat = new byte[2 * r, 2 * r];
        //    for (int x = (int)0.7 * r; x < r; x++)
        //    {
        //        y = (int)InvSqrt(rr - x * x);
        //        ans[r + x, r + y] = true;
        //        ans[r - x, r + y] = true;
        //        ans[r + x, r - y] = true;
        //        ans[r - x, r - y] = true;
        //        ans[r + y, r + x] = true;
        //        ans[r + y, r - x] = true;
        //        ans[r - y, r + x] = true;
        //        ans[r - y, r - x] = true;
        //    }
        //    return ans;
        //}
        //static float InvSqrt(float x)
        //{
        //    unsafe
        //    {
        //        float xhalf = 0.5f * x;
        //        int i = *(int*)&x;
        //        i = 0x5f3759df - (i >> 1);
        //        x = *(float*)&i;
        //        x = x * (1.5f - xhalf * x * x);
        //        return 1/x;
        //    }
        //}





    }

}