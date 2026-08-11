/* Ghidra address: 01052800 */
/* Ghidra symbol: FUN_01052800 */


void FUN_01052800(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_010527b0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00f8d6b0(*(undefined8 *)(param_1 + 0x9d8));
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x6c4) != '\0') {
        FUN_00f8d1c0(*(undefined8 *)(param_1 + 0x9d8),1);
      }
      FUN_00f8d160(*(undefined8 *)(param_1 + 0x9d8),0);
      FUN_00f8d1e0(*(undefined8 *)(param_1 + 0x9d8),1);
      FUN_00f8daa0(*(undefined8 *)(param_1 + 0x9d8),2);
      if (param_2 == 2) {
        FUN_00f8d910(*(undefined8 *)(param_1 + 0x9d8));
      }
      else {
        FUN_00f8d840(*(undefined8 *)(param_1 + 0x9d8));
      }
      FUN_00f8d1e0(*(undefined8 *)(param_1 + 0x9d8),0);
      FUN_00f8d1a0(*(undefined8 *)(param_1 + 0x9d8),0);
      FUN_00f8d160(*(undefined8 *)(param_1 + 0x9d8),1);
      FUN_00f8d220(*(undefined8 *)(param_1 + 0x9d8),&local_10);
      FUN_00f65450(*(undefined8 *)(param_1 + 0x980),local_10);
      if (*(char *)(param_1 + 0x8ea) == '\0') {
        FUN_010508e0(param_1);
      }
      goto code_r0x0105297e;
    }
  }
  cVar1 = FUN_010527b0(param_1);
  if (cVar1 != '\0') {
    FUN_00f8d1e0(*(undefined8 *)(param_1 + 0x9d8),1);
  }
  FUN_00f8d160(*(undefined8 *)(param_1 + 0x9d8),1);
  FUN_00f8d6c0(*(undefined8 *)(param_1 + 0x9d8),param_2);
code_r0x0105297e:
  FUN_00414480(&local_10);
  return;
}

