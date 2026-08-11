/* Ghidra address: 014a9f90 */
/* Ghidra symbol: FUN_014a9f90 */


void FUN_014a9f90(longlong *param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_58;
  short local_50;
  undefined2 local_4d;
  undefined8 local_4b;
  undefined8 local_43;
  undefined2 local_3b;
  undefined8 local_39;
  undefined8 local_31;
  undefined1 local_29;
  
  lVar3 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar3 = DAT_0210eae0;
  }
  if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,&local_3b,0x13);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(lVar3 + 0x8a8) = local_3b;
      *(undefined8 *)(lVar3 + 0x8aa) = local_39;
      *(undefined8 *)(lVar3 + 0x8b2) = local_31;
      *(undefined1 *)(lVar3 + 0x8c2) = local_29;
    }
    FUN_01d30f00(*param_1,&local_50,2);
    if (local_50 == 0) {
      *(undefined8 *)(lVar3 + 0x8ba) = 0;
    }
    else {
      uVar2 = FUN_01d0efe0(&DAT_01d0ae90,1);
      *(undefined8 *)(lVar3 + 0x8ba) = uVar2;
      iVar1 = (int)local_50;
      if (-1 < iVar1 + -1) {
        do {
          FUN_01d30f00(*param_1,&local_58,8);
          FUN_01d0f0e0(*(undefined8 *)(lVar3 + 0x8ba),local_58);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_4d,0x12);
    *(undefined2 *)(lVar3 + 0x8a8) = local_4d;
    *(undefined8 *)(lVar3 + 0x8aa) = local_4b;
    *(undefined8 *)(lVar3 + 0x8b2) = local_43;
    *(undefined1 *)(lVar3 + 0x8c2) = 0;
    *(undefined8 *)(lVar3 + 0x8ba) = 0;
  }
  return;
}

