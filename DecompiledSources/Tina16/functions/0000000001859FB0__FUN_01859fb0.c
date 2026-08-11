/* Ghidra address: 01859fb0 */
/* Ghidra symbol: FUN_01859fb0 */


undefined8
FUN_01859fb0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0185a7d0(param_1,param_4);
  uVar2 = FUN_00a395e0(&PTR_FUN_01858398,1,uVar1,8,param_2,param_3);
  if ((param_5 & (char)param_4 == '\a') != 0) {
    FUN_00a3c4c0(uVar2);
  }
  return uVar2;
}

