/* Ghidra address: 0187b2f0 */
/* Ghidra symbol: FUN_0187b2f0 */


void FUN_0187b2f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  bool bVar8;
  undefined8 local_20;
  
  local_20 = 0;
  lVar5 = FUN_00410e60(&DAT_01877dd8,1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd8),lVar5);
  FUN_01879fe0(*(undefined8 *)(param_1 + 0xb0),param_2,lVar5 + 8,lVar5 + 0x20,lVar5 + 0x10,
               lVar5 + 0x18,lVar5 + 0x19,*(undefined8 *)(param_1 + 0xe0),
               *(undefined1 *)(param_1 + 0xe8));
  if (*(longlong *)(lVar5 + 0x10) == 0) {
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1 + 0xd0);
  }
  *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x10);
  uVar6 = FUN_0187b220(param_1,*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(lVar5 + 0xd0) = uVar6;
  lVar1 = *(longlong *)(lVar5 + 0xd0);
  ppuVar7 = &PTR_FUN_0192c3a0;
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_0192c3a0);
  if (((cVar2 != '\0') && (*(char *)(lVar1 + 0x1cc) != '\0')) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x138) != 0)) {
    uVar4 = FUN_01968a80(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x138));
    if (uVar4 < 0x10) {
      bVar8 = ((int)CONCAT62((int6)((ulonglong)ppuVar7 >> 0x10),1) << ((byte)uVar4 & 0x1f) & 0x202aU
              ) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x138);
    }
  }
  uVar3 = FUN_004113d0(*(undefined8 *)(lVar5 + 0xd0),&PTR_FUN_01930a20);
  *(undefined1 *)(lVar5 + 0x28) = uVar3;
  FUN_0043ea00(&local_20,param_2);
  FUN_00414ad0(lVar5 + 200,local_20);
  FUN_00414ad0(lVar5 + 0xc0,*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x10));
  FUN_01879810(lVar5);
  FUN_00414480(&local_20);
  return;
}

