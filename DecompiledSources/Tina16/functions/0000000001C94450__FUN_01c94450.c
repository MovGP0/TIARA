/* Ghidra address: 01c94450 */
/* Ghidra symbol: FUN_01c94450 */


void FUN_01c94450(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_1a [2];
  
  lVar3 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
  cVar1 = FUN_01d0fb00(lVar3 + 0x40,PTR_DAT_02004010);
  if (cVar1 == '\0') {
    FUN_0199e310(*(undefined8 *)(lVar3 + 0x10),0,1,1);
  }
  FUN_00417c40(lVar3 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
  uVar2 = FUN_01c8a290(param_1,*(undefined8 *)(param_1 + 0x2770),*(undefined8 *)(param_1 + 0x2788));
  FUN_01c94060(param_1,uVar2,local_1a,0);
  if (*(int *)(*(longlong *)(param_1 + 0x2780) + 0x10) == 0) {
    FUN_01c77470(param_1,1);
  }
  return;
}

