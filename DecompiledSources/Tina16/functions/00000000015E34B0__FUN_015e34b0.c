/* Ghidra address: 015e34b0 */
/* Ghidra symbol: FUN_015e34b0 */


undefined8 FUN_015e34b0(undefined8 param_1,int param_2,ulonglong param_3,undefined2 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_015e31d0(&PTR_FUN_015bdbf0,CONCAT71((int7)(param_3 >> 8),1) & 0xffffffff,
                       (longlong)param_2 / 8 & 0xffffffff,param_3 & 0xffff,param_4);
  return uVar1;
}

