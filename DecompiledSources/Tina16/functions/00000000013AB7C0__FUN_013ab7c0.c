/* Ghidra address: 013ab7c0 */
/* Ghidra symbol: FUN_013ab7c0 */


void FUN_013ab7c0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x6c8);
  pcVar3 = (code *)FUN_00411550(uVar1,0xffb0);
  cVar2 = (*pcVar3)(uVar1);
  if (cVar2 != '\0') {
    FUN_013ac520(param_1,0);
  }
  FUN_00414480(local_20);
  return;
}

