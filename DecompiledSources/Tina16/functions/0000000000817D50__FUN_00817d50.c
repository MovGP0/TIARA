/* Ghidra address: 00817d50 */
/* Ghidra symbol: FUN_00817d50 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00817d50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [12];
  int local_54;
  undefined1 *local_50;
  int local_3c [4];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_28 = *param_3;
  local_29 = 0;
  iVar1 = FUN_007e2ef0(param_2);
  if (iVar1 != 0) {
    local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_3c[2] = 5;
    uVar2 = FUN_00609e10(local_20);
    FUN_005ff880(uVar2,*(undefined8 *)(DAT_02012670 + 0x110));
    iVar1 = FUN_007e2ef0();
    local_3c[3] = 0;
    if (-1 < iVar1 + -1) {
      do {
        local_3c[1] = 0;
        local_3c[0] = 0;
        plVar3 = (longlong *)FUN_007e2f10(param_2,local_3c[3]);
        uVar2 = FUN_00609e10(local_20);
        (**(code **)(*plVar3 + 0x98))(plVar3,uVar2,local_3c + 1,local_3c);
        local_3c[2] = local_3c[2] + local_3c[0];
        local_3c[3] = local_3c[3] + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(local_20);
    uVar2 = FUN_00809b30(DAT_02012670,&local_28,0);
    FUN_00807850(uVar2,local_60);
    local_29 = local_54 < local_28._4_4_ + local_3c[2];
  }
  return local_29;
}

