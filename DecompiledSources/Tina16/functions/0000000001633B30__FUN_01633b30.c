/* Ghidra address: 01633b30 */
/* Ghidra symbol: FUN_01633b30 */


undefined1 FUN_01633b30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_49 = 0;
  *param_4 = 0xffffffff;
  if ((*(char *)(param_1 + 0x90) == -0x3a) || (*(char *)(param_1 + 0x90) == -0x3b)) {
    uVar3 = FUN_016353c0(param_2);
    iVar6 = *(int *)(param_1 + 0x1c);
    if (iVar6 <= *(int *)(param_1 + 0x20)) {
      iVar7 = (*(int *)(param_1 + 0x20) - iVar6) + 1;
      do {
        lVar4 = FUN_004aeac0(uVar3,iVar6);
        if (*(char *)(lVar4 + 8) == '5') {
          cVar1 = FUN_0162f300(lVar4);
          if (cVar1 != '\0') {
            uVar5 = FUN_01612bc0(lVar4,1);
            lVar4 = FUN_016373b0(param_2,uVar5,0,0);
            if (lVar4 == 0) {
              uVar5 = FUN_00b89270();
              FUN_0041ddd0(&local_38,PTR_PTR_02004890);
              FUN_00b8e650(uVar5,&local_30,L"HDLStrings.Msg_InvLaplExpr",local_38);
              FUN_01613110(local_30);
            }
            if ((*(char *)(lVar4 + 8) != '2') && (*(char *)(lVar4 + 8) != '4')) {
              uVar5 = FUN_00b89270();
              FUN_0041ddd0(&local_48,PTR_PTR_02004890);
              FUN_00b8e650(uVar5,&local_40,L"HDLStrings.Msg_InvLaplExpr",local_48);
              FUN_01613110(local_40);
            }
            uVar2 = FUN_004aeba0(uVar3,lVar4);
            *param_4 = uVar2;
            local_49 = 1;
            break;
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00414560(&local_48,4);
  return local_49;
}

