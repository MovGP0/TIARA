/* Ghidra address: 00408730 */
/* Ghidra symbol: FUN_00408730 */


undefined8 FUN_00408730(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [56];
  undefined8 local_30;
  
  uVar2 = *param_1;
  local_30 = 0;
  cVar1 = FUN_004086a0(auStack_68,uVar2,0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

