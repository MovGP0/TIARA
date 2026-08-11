/* Ghidra address: 01752020 */
/* Ghidra symbol: FUN_01752020 */


void FUN_01752020(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,char param_6)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff70;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  short local_3d;
  short local_3b;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined4 local_35;
  float local_2d;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (((((param_2 != 0) || (local_res18 != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb) == '\0')) &&
      ((param_2 == 0 || (*(char *)(param_2 + 0x12d) == '\0')))) &&
     (*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40), param_6 != '\0')) {
    cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
    if ((cVar1 != -1) && (*(char *)(param_1 + 9) == '\0')) {
      local_50 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060bbf0(local_50,6);
      (**(code **)(*local_50 + 0x88))(local_50,0x2c);
      (**(code **)(*local_50 + 0x70))(local_50,0xe);
      lVar8 = FUN_00609e10(local_50);
      plVar9 = (longlong *)FUN_00609e10(DAT_0210ffb0);
      uVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,0,0);
      FUN_005fdab0(*(undefined8 *)(lVar8 + 0x80),uVar4);
      plVar9 = (longlong *)FUN_00609e10(local_50);
      uVar4 = (**(code **)(*local_50 + 0x60))(local_50);
      uVar5 = (**(code **)(*local_50 + 0x48))(local_50);
      FUN_00498370(local_68,0,0,uVar4,uVar5);
      (**(code **)(*plVar9 + 0xa8))(plVar9,local_68);
      sVar3 = FUN_01d03160(*(undefined8 *)(param_1 + 0x28));
      if ((sVar3 == 5) || ((sVar3 == 0x21 || (sVar3 == 0x77)))) {
        uVar2 = 0;
      }
      else if ((sVar3 == 6) || (sVar3 == 0x22)) {
        uVar2 = 1;
      }
      else if (sVar3 == 7) {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
      uVar10 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff70 >> 8),1);
      FUN_01751c60(param_1,param_2,local_50,&DAT_01f9b120,uVar2,uVar10,1);
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_58 = FUN_00498310(0,0);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        uVar10 = FUN_01d06fb0(*(longlong *)(param_1 + 0x28),
                              *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1));
        *(undefined8 *)(param_1 + 0x48) = uVar10;
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        cVar1 = FUN_00c3d380(*(longlong *)(param_1 + 0x48),&local_48,&local_3d);
        if (cVar1 != '\0') {
          cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x10) = (int)cVar1;
          if (param_2 != 0) {
            FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
          }
          uVar10 = FUN_01a9f060(local_39,local_38,local_37,local_36,local_35,local_48,
                                *(undefined1 *)(param_1 + 0x10));
          uVar4 = (undefined4)((ulonglong)local_48 >> 0x20);
          local_58 = FUN_0173cce0(uVar10);
          if (param_2 != 0) {
            uVar5 = FUN_0040c770((double)(int)local_58 / (double)local_2d);
            local_58 = CONCAT44(local_58._4_4_,uVar5);
            iVar6 = FUN_0040c770((double)local_58._4_4_ / (double)local_2d);
            local_58 = CONCAT44(iVar6,(int)local_58);
            local_58 = FUN_00498310((int)local_58 + local_3d,iVar6 + local_3b);
          }
          if (local_res18 != 0) {
            plVar9 = (longlong *)FUN_00609e10(uVar10);
            iVar6 = (**(code **)(*local_50 + 0x60))(local_50);
            iVar7 = (**(code **)(*local_50 + 0x48))(local_50);
            FUN_00498350(local_68,local_58 & 0xffffffff,local_58._4_4_,(int)local_58 + iVar6,
                         local_58._4_4_ + iVar7);
            (**(code **)(*plVar9 + 0x110))(plVar9,local_68,local_50);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                      (*(longlong **)(param_1 + 0x20),uVar10);
          }
          FUN_00410f20(uVar10);
        }
      }
      if (param_2 != 0) {
        iVar6 = (**(code **)(*local_50 + 0x60))(local_50);
        iVar6 = FUN_0040c840((double)iVar6 / (double)local_2d);
        iVar7 = (**(code **)(*local_50 + 0x48))(local_50);
        iVar7 = FUN_0040c840((double)iVar7 / (double)local_2d);
        FUN_01751f20(param_1,param_2,&local_50,local_58 & 0xffffffff,local_58._4_4_,
                     CONCAT44(uVar4,(int)local_58 + iVar6),local_58._4_4_ + iVar7);
      }
      FUN_00410f20(local_50);
    }
  }
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

