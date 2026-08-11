/* Ghidra address: 00883110 */
/* Ghidra symbol: FUN_00883110 */


longlong FUN_00883110(longlong param_1,char param_2,int param_3,undefined8 param_4,
                     undefined8 *param_5,int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 **ppuVar6;
  longlong local_res8;
  undefined1 auStack_1078 [4088];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined1 *apuStack_58 [7];
  
  apuStack_58[5] = auStack_78;
  apuStack_58[2] = (undefined1 *)0x0;
  apuStack_58[3] = (undefined1 *)0x0;
  apuStack_58[4] = (undefined1 *)0x0;
  lVar1 = (longlong)param_6 + 1;
  uVar3 = lVar1 * -0x10 & 0xfff;
  while (lVar1 * -0x10 < (longlong)uVar3) {
    auStack_1078[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  ppuVar6 = apuStack_58 + lVar1 * -2 + 2;
  for (lVar5 = ((longlong)param_6 + 1) * 2; lVar5 != 0; lVar5 = lVar5 + -1) {
    *ppuVar6 = (undefined1 *)*param_5;
    param_5 = param_5 + 1;
    ppuVar6 = ppuVar6 + 1;
  }
  local_res8 = param_1;
  if (param_2 != '\0') {
    (&uStack_80)[lVar1 * -2] = 0x8831e0;
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  (&uStack_80)[lVar1 * -2] = 0x883207;
  FUN_00876cf0(apuStack_58 + 4,param_4,apuStack_58 + lVar1 * -2 + 2,param_6);
  puVar4 = apuStack_58[4];
  (&uStack_80)[lVar1 * -2] = 0x88321b;
  FUN_00414ad0(local_res8 + 0x40,puVar4);
  *(int *)(local_res8 + 0x30) = param_3;
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(local_res8 + 0x40);
    (&uStack_80)[lVar1 * -2] = 0x88324d;
    FUN_0086dfd0(local_res8,0,uVar2);
  }
  else {
    (&uStack_80)[lVar1 * -2] = 0x883261;
    FUN_0044b630(apuStack_58 + 3,param_3,0);
    puVar4 = apuStack_58[3];
    (&uStack_80)[lVar1 * -2] = 0x883275;
    FUN_00414ad0(local_res8 + 0x38,puVar4);
    uVar2 = *(undefined8 *)(local_res8 + 0x40);
    apuStack_58[lVar1 * -2] = *(undefined1 **)(local_res8 + 0x38);
    (&uStack_80)[lVar1 * -2] = 0x8832a5;
    FUN_00416cd0(apuStack_58 + 2,3,uVar2,&LAB_00883380);
    puVar4 = apuStack_58[2];
    (&uStack_80)[lVar1 * -2] = 0x8832b7;
    FUN_0086dfd0(local_res8,0,puVar4);
  }
  (&uStack_80)[lVar1 * -2] = 0x8832c6;
  FUN_00414560(apuStack_58 + 2,3);
  if (param_2 != '\0') {
    (&uStack_80)[lVar1 * -2] = 0x8832db;
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

