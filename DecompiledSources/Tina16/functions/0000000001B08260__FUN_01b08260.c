/* Ghidra address: 01b08260 */
/* Ghidra symbol: FUN_01b08260 */


undefined8
FUN_01b08260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,char param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_res18 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_70 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar8 = 1;
  do {
    if (*(int *)(param_1 + 0x2d8) < iVar8) {
      local_78 = 0;
      if (param_6 != '\0') {
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,&local_48,0x20f);
        local_68 = local_res18[0];
        local_60 = 0x11;
        FUN_01b20020(&local_70,param_2,&LAB_01b084a4);
        local_58 = local_70;
        local_50 = 0x11;
        FUN_00442f70(&local_40,local_48,&local_68,1);
        FUN_01b05000(local_40,0);
      }
LAB_01b08420:
      FUN_00414480(&local_70);
      FUN_00414560(&local_48,4);
      FUN_00414480(local_res18);
      return local_78;
    }
    cVar2 = FUN_0198a580(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar8 * 8)
                          + 0x128));
    if (cVar2 == '\x04') {
      plVar1 = *(longlong **)
                (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar8 * 8) + 0x128);
      lVar5 = FUN_017ff620(plVar1);
      lVar6 = FUN_017ff620(param_2);
      if (lVar5 == lVar6) {
        uVar3 = FUN_01d03160(plVar1);
        cVar2 = FUN_01b07ef0(param_4,param_5,uVar3);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0x288))(plVar1,&local_38);
          FUN_01b07e40(local_30,local_38);
          iVar4 = FUN_00416db0(local_30[0],local_res18[0]);
          if (iVar4 == 0) {
            local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar8 * 8);
            goto LAB_01b08420;
          }
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

