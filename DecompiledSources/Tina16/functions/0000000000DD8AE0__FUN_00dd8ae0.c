/* Ghidra address: 00dd8ae0 */
/* Ghidra symbol: FUN_00dd8ae0 */


undefined4 FUN_00dd8ae0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),param_2,param_3,&local_c);
  FUN_006245b0(uVar1);
  return local_c;
}

