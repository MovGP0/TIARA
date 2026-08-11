/* Ghidra address: 01698740 */
/* Ghidra symbol: FUN_01698740 */


undefined8 FUN_01698740(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140 [2];
  uint local_12c;
  undefined1 local_128 [264];
  
  local_140[0] = 0;
  local_150 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_0040f5d0(local_128,param_2);
    cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x20),local_128,&local_12c);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d350f0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x9f8),local_128,
                           &local_12c);
      if (cVar1 == '\0') {
        cVar2 = FUN_00ee3970(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 8),2,local_128,
                             0,0);
        if (cVar2 != '\0') {
          cVar1 = FUN_01d350f0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x9f8),
                               local_128,&local_12c);
        }
      }
      else {
        local_148 = FUN_01d347d0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x9f8),
                                 local_12c);
      }
      if (cVar1 != '\0') {
        local_148 = FUN_01d347d0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x9f8),
                                 local_12c);
      }
    }
    else {
      local_148 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x20),local_12c);
    }
    if (cVar1 != '\0') {
      if (*(longlong *)(local_148 + 0x20) == 0) {
        FUN_0044d440();
      }
      plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_00416880(local_140,*(undefined8 *)(local_148 + 0x18));
      FUN_004b4b10(plVar4,local_140[0]);
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28));
      iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      iVar7 = *(int *)(lVar5 + 0x10);
      if (iVar3 == iVar7) {
        local_12c = 0;
        if (-1 < iVar7 + -1) {
          do {
            uVar6 = FUN_004aeac0(lVar5,local_12c);
            FUN_016a8210(*(undefined8 *)(param_1 + 0x38),uVar6,0);
            uVar6 = FUN_004aeac0(lVar5,local_12c);
            FUN_01698b40(param_1,uVar6);
            local_12c = local_12c + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_150 = FUN_016a92e0(*(undefined8 *)(local_148 + 0x20),0);
        FUN_01698d70(param_1,local_150,plVar4,lVar5);
      }
      FUN_01698a10(param_1,lVar5);
      FUN_00410f20(plVar4);
    }
  }
  FUN_00414480(local_140);
  return local_150;
}

