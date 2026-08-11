/* Ghidra address: 0175a7a0 */
/* Ghidra symbol: FUN_0175a7a0 */


void FUN_0175a7a0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_a8 [32];
  byte *local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong *local_68;
  longlong local_60;
  undefined1 local_50 [23];
  byte local_39;
  undefined8 local_38;
  short local_2d;
  short local_2b;
  byte local_29;
  undefined1 local_28;
  undefined1 local_27;
  char local_26;
  undefined4 local_25;
  undefined4 local_1d;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_68 = param_1;
  local_60 = param_2;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (local_60 == 0) {
LAB_0175a7f6:
    if (local_res18 == 0) goto LAB_0175aa90;
  }
  else {
    cVar1 = FUN_0175ad40(local_68,local_60);
    if (cVar1 == '\0') goto LAB_0175a7f6;
  }
  if (*(char *)(local_68[5] + 0xb) == '\0') {
    plVar4 = (longlong *)(**(code **)(*local_68 + 0x78))(local_68);
    local_68[7] = *plVar4;
    puVar5 = (undefined8 *)(**(code **)(*local_68 + 0x78))(local_68);
    local_88 = &local_39;
    bVar2 = FUN_0175a260(auStack_a8,*puVar5,(double)*(float *)(puVar5 + 2),local_50);
    if (param_6 == '\0') {
      if (((*(char *)((longlong)local_68 + 0xb) != '\0') && ((char)local_68[1] != '\0')) &&
         ((*PTR_DAT_020052b8 == '\0' || (*PTR_DAT_020023b0 == '\0')))) {
        FUN_0173d380(local_68,local_60,local_res18,local_res20);
      }
    }
    else {
      if (local_68[9] == 0) {
        lVar6 = FUN_01d06fb0(local_68[5],*(undefined1 *)(local_68[5] + 0xd1));
        local_68[9] = lVar6;
      }
      if (local_68[9] != 0) {
        cVar1 = FUN_00c3d380(local_68[9],&local_38,&local_2d);
        if (cVar1 != '\0') {
          cVar1 = FUN_01d07320(local_68[5]);
          *(uint *)(local_68 + 2) = (uint)local_39 * (uint)local_29 + (int)cVar1;
          if (local_60 != 0) {
            FUN_01a9d8b0(local_60,(char)local_68[2]);
            FUN_01a9a720(local_60,*(undefined4 *)(local_68[5] + 0xc),
                         *(undefined4 *)(local_68[5] + 0x10));
            uVar3 = FUN_0173cca0(local_68[5],param_5,param_6);
            FUN_01a9a770(local_60,uVar3);
            FUN_01a9a780(local_60,*(undefined1 *)(local_68[5] + 0xd1),
                         *(undefined1 *)(local_68[5] + 0xd3));
          }
          local_88 = (byte *)CONCAT44(local_88._4_4_,local_25);
          local_80 = local_38;
          local_78 = (undefined1)local_68[2];
          pbVar7 = (byte *)FUN_01a9f060(local_29,local_28,local_27,local_26);
          if ((local_26 == '\0') && ((char)local_68[1] != '\0')) {
            FUN_01a9e8f0(pbVar7,4,0);
          }
          if (((local_60 != 0) && ((*(ushort *)(local_60 + 0x160) & 2) == 0)) ||
             ((bVar2 & local_res18 != 0) != 0)) {
            FUN_0175a0c0(auStack_a8,pbVar7,local_50);
          }
          (**(code **)(*(longlong *)local_68[4] + 0x10))((longlong *)local_68[4],pbVar7);
          if (local_60 != 0) {
            local_80 = 0;
            local_78 = 1;
            local_88 = pbVar7;
            FUN_01a9f420(local_60,(longlong)local_2d,(longlong)local_2b,local_1d);
          }
        }
      }
    }
  }
LAB_0175aa90:
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

