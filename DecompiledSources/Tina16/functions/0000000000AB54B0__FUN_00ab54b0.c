/* Ghidra address: 00ab54b0 */
/* Ghidra symbol: FUN_00ab54b0 */


undefined8
FUN_00ab54b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_00abd400(&PTR_FUN_00a82408,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                       param_3,*(undefined4 *)((longlong)param_1 + 0x6c),param_2,param_5,0);
  FUN_004ae7e0(param_1[0x1f],uVar1);
  (**(code **)(*param_1 + 0xc0))(param_1,4,param_4);
  return uVar1;
}

