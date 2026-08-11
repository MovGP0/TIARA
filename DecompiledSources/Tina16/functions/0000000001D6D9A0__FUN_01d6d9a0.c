/* Ghidra address: 01d6d9a0 */
/* Ghidra symbol: FUN_01d6d9a0 */


void FUN_01d6d9a0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  byte local_59;
  longlong *local_50 [5];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar6 = false;
  }
  if ((!bVar6) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee260(param_1,local_50,8,0);
    lVar2 = *local_50[0];
    puVar1 = (undefined1 *)(lVar2 + 0x10);
    cVar5 = *(char *)(lVar2 + 0x13);
    if (cVar5 == '\0') {
      lVar3 = FUN_0041f930();
      *(undefined8 *)(lVar3 + 0x280) = 0x4014000000000000;
    }
    else {
      lVar3 = FUN_0041f930();
      uVar7 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),cVar5,*puVar1,0);
      *(undefined8 *)(lVar3 + 0x280) = uVar7;
    }
    cVar5 = *(char *)(lVar2 + 0x30);
    local_59 = 1;
    for (; cVar5 != '\0'; cVar5 = cVar5 + -1) {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + -0x228 + (ulonglong)local_59 * 0x228);
      (**(code **)(*(longlong *)(lVar3 + 8) + 0x10))(lVar3,param_1,param_2,param_3);
      local_59 = local_59 + 1;
    }
    cVar5 = *(char *)(lVar2 + 0x30);
    local_59 = 1;
    for (; cVar5 != '\0'; cVar5 = cVar5 + -1) {
      uVar7 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                           *(undefined1 *)
                            (*(longlong *)
                              (*(longlong *)(lVar2 + 0x28) + -0x228 + (ulonglong)local_59 * 0x228) +
                            2),*puVar1,0);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x9fc0) + -8 + (ulonglong)local_59 * 8) = uVar7;
      local_59 = local_59 + 1;
    }
    uVar7 = (**(code **)(lVar2 + 0x18))
                      (*(undefined1 *)(lVar2 + 0x20),*(undefined1 *)(lVar2 + 0x30),
                       *(undefined8 *)(lVar2 + 0x9fc0),lVar2,lVar2 + 0x9fc8);
    dVar9 = 0.0;
    if (*(char *)(lVar2 + 0x9cc0) == '\0') {
      cVar5 = *(char *)(lVar2 + 0x30);
      local_59 = 0;
      do {
        uVar4 = (ulonglong)(local_59 + 1);
        uVar8 = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                             *(undefined1 *)
                              (*(longlong *)(*(longlong *)(lVar2 + 0x28) + -0x228 + uVar4 * 0x228) +
                              2),*puVar1,0);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x9fc0) + -8 + uVar4 * 8) = uVar8;
        FUN_016ed220(param_1,*(char *)(lVar2 + 0x14) + local_59,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x9fc8) + -8 + uVar4 * 8),0);
        dVar9 = dVar9 + *(double *)(*(longlong *)(lVar2 + 0x9fc0) + -8 + uVar4 * 8) *
                        *(double *)(*(longlong *)(lVar2 + 0x9fc8) + -8 + uVar4 * 8);
        local_59 = local_59 + 1;
        cVar5 = cVar5 + -1;
      } while (cVar5 != '\0');
    }
    else {
      uVar7 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x38) + 8) + 0x18))
                        (*(longlong *)(lVar2 + 0x38),param_1,param_2,uVar7,param_3);
      dVar9 = 0.0;
    }
    (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x9cc8) + 8) + 0x10))
              (*(longlong *)(lVar2 + 0x9cc8),param_1,param_2,uVar7,dVar9,param_3,2,2);
  }
  return;
}

