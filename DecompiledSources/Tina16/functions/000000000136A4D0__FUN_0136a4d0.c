/* Ghidra address: 0136a4d0 */
/* Ghidra symbol: FUN_0136a4d0 */


void FUN_0136a4d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  uVar4 = FUN_0198d430(plVar1);
  puVar10 = &local_30;
  FUN_01a982d0(uVar4,param_2,param_3,&local_2c,puVar10);
  lVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,local_2c,local_30);
  if (lVar5 != 0) {
    cVar2 = FUN_0199c7c0(lVar5);
    if (cVar2 != '\0') {
      FUN_019943c0(plVar1,lVar5);
      FUN_01993f30(plVar1,lVar5,1,0);
      *(longlong *)PTR_DAT_02005518 = lVar5;
      uVar11 = (ulonglong)puVar10 & 0xffffffff00000000;
      plVar6 = (longlong *)
               FUN_013ec890(&PTR_FUN_013eb788,1,*(undefined8 *)PTR_DAT_02004030,0,uVar11);
      FUN_013ecad0(plVar6,1,1);
      iVar3 = (**(code **)(*plVar6 + 0x2d0))(plVar6);
      if (iVar3 != 2) {
        if (*PTR_DAT_02002430 == '\0') {
          lVar7 = FUN_019a4600();
          plVar8 = (longlong *)FUN_004aecf0(*(undefined8 *)(lVar7 + 0x478));
          *plVar8 = lVar5;
        }
        lVar7 = FUN_019a4600();
        if (*(int *)(*(longlong *)(lVar7 + 0x478) + 0x10) < 1) {
          *(undefined8 *)(PTR_DAT_02004010 + 0x56e) = *(undefined8 *)(PTR_DAT_02001120 + 0x56e);
        }
        else {
          lVar7 = FUN_019a4600();
          puVar9 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar7 + 0x478),0);
          *(undefined8 *)(PTR_DAT_02004010 + 0x56e) = *puVar9;
        }
        lVar7 = *(longlong *)(PTR_DAT_02004010 + 0x56e);
        if (lVar7 != 0) {
          uVar4 = FUN_0198d430(plVar1);
          uVar12 = CONCAT71((int7)(uVar11 >> 8),PTR_DAT_02004010[0x814]);
          FUN_017be0e0(lVar7,uVar4,&local_40,PTR_DAT_02004010[0x816],uVar12,*PTR_DAT_020037e8,
                       PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
          uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
          plVar8 = (longlong *)FUN_0198d430(plVar1);
          uVar11 = CONCAT44(uVar13,local_34);
          (**(code **)(*plVar8 + 0x30))(plVar8,local_40,local_3c,local_38,uVar11);
        }
        uVar4 = FUN_0198d430(plVar1);
        uVar12 = CONCAT71((int7)(uVar11 >> 8),PTR_DAT_02004010[0x814]);
        FUN_017be0e0(lVar5,uVar4,&local_40,PTR_DAT_02004010[0x816],uVar12,*PTR_DAT_020037e8,
                     PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        plVar8 = (longlong *)FUN_0198d430(plVar1);
        (**(code **)(*plVar8 + 0x30))(plVar8,local_40,local_3c,local_38,CONCAT44(uVar13,local_34));
        FUN_0199e310(plVar1,0,1,0);
      }
      FUN_00410f20(plVar6);
      FUN_0064e770(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa10));
      FUN_01364ff0(param_1,param_2,param_3);
    }
  }
  return;
}

