/* Ghidra address: 00461520 */
/* Ghidra symbol: FUN_00461520 */


void FUN_00461520(undefined2 *param_1,ushort *param_2,code *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_388 [32];
  code *local_368;
  undefined2 *local_360;
  int local_358;
  uint local_354;
  ushort *local_350;
  undefined8 local_340;
  undefined8 local_338;
  int local_32c;
  int local_328 [128];
  int local_128 [64];
  
  uVar1 = *param_2;
  local_368 = param_3;
  local_360 = param_1;
  if ((uVar1 & 0x2000) == 0) {
    FUN_004607e0(0x80070057);
  }
  if ((uVar1 & 0xfff) == 0xc) {
    if ((uVar1 & 0x4000) == 0) {
      local_350 = *(ushort **)(param_2 + 4);
    }
    else {
      local_350 = (ushort *)**(undefined8 **)(param_2 + 4);
    }
    uVar8 = (uint)*local_350;
    local_358 = 0;
    local_354 = uVar8;
    if (-1 < (int)(uVar8 - 1)) {
      piVar5 = local_328;
      do {
        iVar7 = local_358 + 1;
        uVar3 = thunk_FUN_041a1c33(local_350,iVar7,piVar5 + 1);
        FUN_004607e0(uVar3);
        uVar3 = thunk_FUN_041aeaef(local_350,iVar7,&local_32c);
        FUN_004607e0(uVar3);
        *piVar5 = (local_32c - piVar5[1]) + 1;
        local_358 = local_358 + 1;
        piVar5 = piVar5 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar4 = thunk_FUN_04177424(0xc,local_354,local_328);
    if (lVar4 == 0) {
      FUN_004603e0();
    }
    FUN_00460b80(local_360);
    *local_360 = 0x200c;
    *(longlong *)(local_360 + 4) = lVar4;
    if (-1 < (int)(local_354 - 1)) {
      piVar5 = local_328 + 1;
      piVar6 = local_128;
      uVar8 = local_354;
      do {
        *piVar6 = *piVar5;
        piVar6 = piVar6 + 1;
        piVar5 = piVar5 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    do {
      iVar7 = local_354 - 1;
      cVar2 = FUN_004614a0(auStack_388,iVar7);
      if (cVar2 != '\0') {
        uVar3 = thunk_FUN_041151fc(local_350,local_128,&local_338);
        FUN_004607e0(uVar3);
        uVar3 = thunk_FUN_041151fc(lVar4,local_128,&local_340);
        FUN_004607e0(uVar3);
        (*local_368)(local_340,local_338);
      }
      cVar2 = FUN_004614d0(auStack_388,iVar7);
    } while (cVar2 != '\0');
  }
  else {
    uVar3 = thunk_FUN_03f30cb2(local_360,param_2);
    FUN_004607e0(uVar3);
  }
  return;
}

