/* Ghidra address: 004c6da0 */
/* Ghidra symbol: FUN_004c6da0 */


void FUN_004c6da0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 local_10;
  
  local_10 = 0;
  pcVar2 = (code *)FUN_004a3070(param_2);
  if (pcVar2 != (code *)0x0) {
    cVar1 = (*pcVar2)(param_3,&local_10);
    if (cVar1 != '\0') {
      FUN_004c55e0(*(undefined8 *)(param_1 + 0x60),local_10);
      goto code_r0x004c6dfc;
    }
  }
  FUN_004c57a0(*(undefined8 *)(param_1 + 0x60),param_3);
code_r0x004c6dfc:
  FUN_00414480(&local_10);
  return;
}

