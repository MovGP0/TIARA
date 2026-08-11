/* Ghidra address: 00411f00 */
/* Ghidra symbol: FUN_00411f00 */


ulonglong FUN_00411f00(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_3c [3];
  
  uVar6 = param_1[6];
  do {
    uVar2 = FUN_00412550(param_1);
    uVar8 = (ulonglong)uVar2;
    if ((char)uVar2 != '\0') {
      return uVar8;
    }
    if (param_2 == 0) {
      return uVar8;
    }
    bVar1 = false;
    if (0 < (int)uVar6) {
      iVar3 = FUN_004070e0();
      local_3c[0] = 0;
      for (; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
        if ((param_2 != 0xffffffff) && (iVar4 = FUN_004070e0(), param_2 <= (uint)(iVar4 - iVar3))) {
          return 0;
        }
        if (1 < (int)*param_1) break;
        if (*param_1 == 0) {
          LOCK();
          uVar5 = *param_1;
          if (uVar5 == 0) {
            *param_1 = 1;
            uVar5 = 0;
          }
          UNLOCK();
          if (uVar5 == 0) {
            uVar6 = FUN_00406e30();
            param_1[2] = uVar6;
            param_1[1] = 1;
            return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
          }
        }
        FUN_00411aa0(local_3c);
      }
      if (param_2 != 0xffffffff) {
        iVar4 = FUN_004070e0();
        if (param_2 <= (uint)(iVar4 - iVar3)) {
          return 0;
        }
        param_2 = param_2 - (iVar4 - iVar3);
      }
    }
    while (uVar2 = *param_1, uVar2 != 0) {
      LOCK();
      uVar5 = *param_1;
      if (uVar2 == uVar5) {
        *param_1 = uVar2 + 2;
        uVar5 = uVar2;
      }
      UNLOCK();
      if (uVar5 == uVar2) goto LAB_00412004;
    }
  } while( true );
LAB_00412004:
  iVar3 = FUN_004070e0();
  uVar7 = FUN_00412160(param_1);
  iVar4 = (**(code **)(PTR_PTR_020069a0 + 0x20))(0,uVar7,param_2);
  bVar9 = iVar4 == 0;
  uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar9);
  if (param_2 != 0xffffffff) {
    iVar4 = FUN_004070e0();
    if ((uint)(iVar4 - iVar3) < param_2) {
      param_2 = param_2 - (iVar4 - iVar3);
    }
    else {
      param_2 = 0;
    }
  }
  if (bVar9) {
    do {
      uVar6 = *param_1;
      if ((uVar6 & 1) != 0) goto LAB_00412093;
      LOCK();
      uVar2 = *param_1;
      if (uVar6 == uVar2) {
        *param_1 = uVar6 - 2 | 1;
        uVar2 = uVar6;
      }
      UNLOCK();
    } while (uVar2 != uVar6);
    bVar1 = true;
  }
  else {
    do {
      uVar2 = *param_1;
      LOCK();
      uVar6 = *param_1;
      if (uVar2 == uVar6) {
        *param_1 = uVar2 - 2;
        uVar6 = uVar2;
      }
      UNLOCK();
    } while (uVar6 != uVar2);
    bVar1 = true;
  }
LAB_00412093:
  if (bVar1) {
    if (bVar9) {
      uVar6 = FUN_00406e30();
      param_1[2] = uVar6;
      param_1[1] = 1;
    }
    return uVar8;
  }
  goto LAB_00412004;
}

