/* Ghidra address: 01643cc0 */
/* Ghidra symbol: FUN_01643cc0 */


void FUN_01643cc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_res10 [3];
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = FUN_0043fc00(local_res10[0]);
  FUN_00414b50(&local_38,L"FALSE");
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(lVar2 + 0x10);
  local_50 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar6 = FUN_00b94e60(lVar2,local_50);
      cVar3 = FUN_0198a580(uVar6);
      if (cVar3 == '\x04') {
        plVar7 = (longlong *)FUN_00b94e60(lVar2,local_50);
        uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        cVar3 = FUN_01628130(uVar4);
        if ((cVar3 != '\0') && (cVar3 = FUN_01643a50(plVar7,uVar5,&local_2c), cVar3 != '\0')) {
          FUN_00414b50(&local_38,L"TRUE");
          FUN_0043f750(&local_40,local_2c);
          (**(code **)(*plVar7 + 0x288))(plVar7,&local_48);
          FUN_00416cd0(param_3,5,local_48,&DAT_01643f4c,local_40,&DAT_01643f4c,local_38);
          goto LAB_01643eaa;
        }
      }
      local_50 = local_50 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  cVar3 = FUN_01643a50(uVar1,uVar5,&local_2c);
  if (cVar3 == '\0') {
    FUN_01613110(L"GetPinInfo");
  }
  else {
    FUN_00414b50(&local_38,L"FALSE");
    FUN_0043f750(&local_40,local_2c);
    FUN_00414b50(&local_48,L"NONE");
    FUN_00416cd0(param_3,5,local_48,&DAT_01643f4c,local_40,&DAT_01643f4c,local_38);
  }
LAB_01643eaa:
  FUN_00414560(&local_48,3);
  FUN_00414480(local_res10);
  return;
}

