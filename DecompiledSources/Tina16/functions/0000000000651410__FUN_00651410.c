/* Ghidra address: 00651410 */
/* Ghidra symbol: FUN_00651410 */


void FUN_00651410(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  int local_28;
  int local_24;
  short *local_20;
  
  *(undefined8 *)(param_2 + 0x18) = 0;
  local_20 = (short *)(param_2 + 0x10);
  local_28 = (int)*local_20;
  local_24 = (int)*(short *)(param_2 + 0x12);
  pcVar2 = (code *)FUN_00411550(param_1,0xffe2);
  cVar1 = (*pcVar2)(param_1,*(undefined2 *)(param_2 + 8),(longlong)*(short *)(param_2 + 10),
                    &local_28);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      uVar3 = FUN_0064fca0(*(longlong *)(param_1 + 0x78),0xb043,*(undefined8 *)(param_2 + 8),
                           *(undefined8 *)(param_2 + 0x10));
      *(undefined8 *)(param_2 + 0x18) = uVar3;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

