/* Ghidra address: 00805370 */
/* Ghidra symbol: FUN_00805370 */


void FUN_00805370(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_19 [9];
  
  local_30 = auStack_58;
  local_19[0] = '\0';
  cVar1 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (cVar1 != '\0') {
    local_19[0] = '\x01';
    pcVar2 = (code *)FUN_00411550(param_1,0xffa9);
    (*pcVar2)(param_1,local_19);
  }
  if (local_19[0] == '\0') {
    *(undefined4 *)(param_1 + 0xa1) = 0;
  }
  else if (local_19[0] == '\x02') {
    FUN_00805ad0(param_1);
  }
  return;
}

