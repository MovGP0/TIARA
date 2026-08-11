/* Ghidra address: 01c94500 */
/* Ghidra symbol: FUN_01c94500 */


void FUN_01c94500(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  short local_1a;
  
  lVar2 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
  cVar1 = FUN_01d0fb00(lVar2 + 0x40,PTR_DAT_02004010);
  if (cVar1 == '\0') {
    FUN_0199e310(*(undefined8 *)(lVar2 + 0x10),0,1,1);
  }
  FUN_00417c40(lVar2 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
  local_1a = 1;
  while ((0 < *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10) && (local_1a != 2))) {
    FUN_01c94060(param_1,0,&local_1a,0);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x2780) + 0x10) == 0) {
    FUN_01c77470(param_1,1);
  }
  return;
}

