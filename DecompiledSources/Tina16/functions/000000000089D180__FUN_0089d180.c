/* Ghidra address: 0089d180 */
/* Ghidra symbol: FUN_0089d180 */


longlong FUN_0089d180(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined2 uVar1;
  undefined4 local_c;
  
  local_c = 0;
  do {
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,*(undefined2 *)(param_3 + (longlong)local_c * 2))
    ;
    *(undefined2 *)(param_2 + (longlong)local_c * 2) = uVar1;
    local_c = local_c + 1;
  } while (local_c != 8);
  return param_2;
}

