/* Ghidra address: 017179d0 */
/* Ghidra symbol: FUN_017179d0 */


undefined8
FUN_017179d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414480(param_2);
  iVar2 = FUN_00c856a0(*(undefined8 *)PTR_DAT_02002c40,*(undefined1 *)(param_1 + 0x268));
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar5 = FUN_00c856d0(*(undefined8 *)PTR_DAT_02002c40,iVar7,*(undefined1 *)(param_1 + 0x268));
      plVar6 = (longlong *)FUN_00c81e70(lVar5);
      cVar1 = FUN_004113d0(plVar6,param_6);
      if (cVar1 != '\0') {
        (**(code **)(*plVar6 + 0x60))(plVar6,local_40);
        iVar3 = FUN_00416db0(local_40[0],local_res20);
        if (iVar3 == 0) {
          FUN_004169a0(&local_48,param_1 + 0x120);
          FUN_00c85a00(*(undefined8 *)PTR_DAT_02002c40,&local_30,*(undefined4 *)(lVar5 + 0x54),
                       local_48,*(undefined1 *)(param_1 + 0x268));
          uVar4 = 0;
          if (local_30 != 0) {
            uVar4 = *(undefined4 *)(local_30 + -4);
          }
          FUN_00416dc0(&local_30,local_30,2,uVar4);
          FUN_004169a0(&local_58,param_1 + 0x120);
          FUN_00c858e0(*(undefined8 *)PTR_DAT_02002c40,&local_50,iVar7,local_58,
                       *(undefined1 *)(param_1 + 0x268));
          FUN_00416cd0(param_2,8,local_res18,&DAT_01717cac,&DAT_01717cc0,local_30,&DAT_01717cd4,
                       local_50,&DAT_01717cd4,param_5);
          break;
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  FUN_00414560(&local_res18,3);
  return param_2;
}

