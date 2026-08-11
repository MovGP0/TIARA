/* Ghidra address: 00697090 */
/* Ghidra symbol: FUN_00697090 */


void FUN_00697090(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 local_28 [16];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10);
  FUN_004238d0(local_28,0,0,*(undefined4 *)(lVar1 + 0x98),*(undefined4 *)(lVar1 + 0x9c));
  FUN_005ff880(*(undefined8 *)(param_1 + 0x178),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0xb8));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006723b8);
  if ((cVar2 == '\0') || (*(char *)(lVar1 + 0x491) == '\0')) {
    FUN_00785c70(*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178),param_1 + 0x134,
                 *(undefined8 *)(param_1 + 0x128),local_28,0x405);
  }
  else {
    FUN_00785c70(*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178),param_1 + 0x134,
                 *(undefined8 *)(param_1 + 0x128),local_28,0x415);
  }
  FUN_004230a0(local_28);
  return;
}

