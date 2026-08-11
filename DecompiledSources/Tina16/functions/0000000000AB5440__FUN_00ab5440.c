/* Ghidra address: 00ab5440 */
/* Ghidra symbol: FUN_00ab5440 */


undefined8
FUN_00ab5440(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_00a94c80(&PTR_FUN_00a83768,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                       param_3,*(undefined4 *)((longlong)param_1 + 0x6c),param_2,param_5);
  FUN_004ae7e0(param_1[0x1f],uVar1);
  (**(code **)(*param_1 + 0xc0))(param_1,4,param_4);
  return uVar1;
}

