/* Ghidra address: 01801410 */
/* Ghidra symbol: FUN_01801410 */


undefined1 FUN_01801410(longlong param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  uVar5 = 0;
  if ((param_2 != '\x01') && (param_2 == '\x02')) {
    lVar6 = *(longlong *)(param_1 + 0x10);
  }
  iVar1 = FUN_00527000(*(undefined4 *)(lVar6 + 0x14),0x20);
  iVar2 = FUN_00526fd0(*(undefined4 *)(lVar6 + 0x10),0x7fffffff);
  iVar3 = FUN_00527000(*(undefined4 *)(lVar6 + 0xc),0x20);
  iVar4 = FUN_00526fd0(*(undefined4 *)(lVar6 + 0x18),0x7fffffff);
  if ((iVar1 <= param_3) && (param_3 <= iVar2)) {
    uVar5 = *(undefined1 *)(lVar6 + 8);
  }
  if ((iVar3 <= param_4) && (param_4 <= iVar4)) {
    uVar5 = *(undefined1 *)(lVar6 + 8);
  }
  return uVar5;
}

