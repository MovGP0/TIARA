/* Ghidra address: 019d7890 */
/* Ghidra symbol: FUN_019d7890 */


void FUN_019d7890(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x18))
            (*(longlong **)(param_1 + 0x6d8),local_20,uVar1);
  FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_20[0],0,0,0,0,1);
  FUN_00414480(local_20);
  return;
}

