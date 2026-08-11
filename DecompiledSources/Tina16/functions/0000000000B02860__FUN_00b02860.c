/* Ghidra address: 00b02860 */
/* Ghidra symbol: FUN_00b02860 */


void FUN_00b02860(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if (param_3 == '\0') {
    FUN_00419430(param_2,&DAT_00b01c88);
  }
  while (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_009dff80(local_30,param_1 + 0x458,&DAT_00b02dbc,1);
    FUN_00414b50(param_1 + 0x450,local_30[0]);
    FUN_009dff80(&local_38,param_1 + 0x458,&DAT_00b02dcc,1);
    FUN_0043e1a0(local_20,local_38);
    if (local_20[0] == 0) break;
    iVar3 = FUN_00416db0(local_20[0],&DAT_00b02ddc);
    if (iVar3 == 0) break;
    iVar3 = FUN_00416db0(local_20[0],&PTR_DAT_00b02df0);
    if (iVar3 == 0) {
      iVar3 = 0;
      if (*param_2 != 0) {
        iVar3 = (int)*(undefined8 *)(*param_2 + -8);
      }
      if (param_3 == '\0') {
        FUN_00b02860(param_1,*(longlong *)(*param_2 + (longlong)(iVar3 + -1) * 8) + 0x10,0);
      }
      else {
        FUN_00b02860(param_1,*(longlong *)(param_1 + 0x480) + 0x50,0);
      }
    }
    else {
      iVar3 = FUN_00416db0(local_20[0],&DAT_00b02e04);
      if (iVar3 == 0) {
        FUN_009dfe20(&local_40,param_1 + 0x458,L"<object",L"</object>",1);
        FUN_00414b50(param_1 + 0x450,local_40);
        if (*(longlong *)(param_1 + 0x450) == 0) break;
        iVar3 = FUN_004170c0(L"type=\"text/sitemap\"",*(undefined8 *)(param_1 + 0x450),1);
        if (iVar3 != 0) {
          FUN_009dfe20(&local_48,param_1 + 0x450,L"<param",&DAT_00b02dcc,1);
          FUN_00414b50(param_1 + 0x438,local_48);
          while (*(longlong *)(param_1 + 0x438) != 0) {
            FUN_00b02710(param_1,*(undefined8 *)(param_1 + 0x438));
            uVar4 = FUN_00414480(param_1 + 0x448);
            cVar2 = FUN_00854130(*(undefined8 *)(param_1 + 0x440),L"name",uVar4);
            if (cVar2 != '\0') {
              iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x448),L"Name");
              if (iVar3 == 0) {
                FUN_00853280(*(undefined8 *)(param_1 + 0x440),&local_50,L"value");
                FUN_00414b50(param_1 + 0x430,local_50);
              }
              iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x448),L"Local");
              if (iVar3 == 0) {
                FUN_00853280(*(undefined8 *)(param_1 + 0x440),&local_58,L"value");
                FUN_00414b50(param_1 + 0x428,local_58);
              }
            }
            FUN_009dfe20(&local_60,param_1 + 0x450,L"<param",&DAT_00b02dcc,1);
            FUN_00414b50(param_1 + 0x438,local_60);
          }
          if (*(longlong *)(param_1 + 0x430) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x480) + 0x38);
            lVar5 = 0;
            if (lVar6 != 0) {
              lVar5 = *(longlong *)(lVar6 + -8);
            }
            if (lVar5 <= *(int *)(*(longlong *)(param_1 + 0x480) + 0x40)) {
              lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x480) + 0x38);
              lVar5 = 0;
              if (lVar6 != 0) {
                lVar5 = *(longlong *)(lVar6 + -8);
              }
              FUN_00419260(*(longlong *)(param_1 + 0x480) + 0x38,&DAT_00b01e50,1,lVar5 + 100);
            }
            lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x480) + 0x40);
            FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x480) + 0x38) + lVar6 * 0x18,
                         *(undefined8 *)(param_1 + 0x430));
            FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x480) + 0x38) + 8 + lVar6 * 0x18,
                         *(undefined8 *)(param_1 + 0x428));
            piVar1 = (int *)(*(longlong *)(param_1 + 0x480) + 0x40);
            *piVar1 = *piVar1 + 1;
            iVar3 = 0;
            if (*param_2 != 0) {
              iVar3 = (int)*(undefined8 *)(*param_2 + -8);
            }
            FUN_00419260(param_2,&DAT_00b01c88,1,(longlong)(iVar3 + 1));
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) =
                 *(longlong *)(*(longlong *)(param_1 + 0x480) + 0x38) +
                 (longlong)(*(int *)(*(longlong *)(param_1 + 0x480) + 0x40) + -1) * 0x18;
            FUN_00414480(param_1 + 0x430);
            FUN_00414480(param_1 + 0x428);
          }
        }
      }
    }
  }
  FUN_00414560(&local_60,7);
  FUN_00414480(local_20);
  return;
}

