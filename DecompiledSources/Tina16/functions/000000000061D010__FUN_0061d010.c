/* Ghidra address: 0061d010 */
/* Ghidra symbol: FUN_0061d010 */


undefined4 FUN_0061d010(longlong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_004b5830(param_1,param_2);
  uVar1 = FUN_007dca30(param_2);
  (**(code **)(*param_1 + 0x48))(param_1,uVar2,uVar1);
  return uVar2;
}

