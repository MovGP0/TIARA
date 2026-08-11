/* Ghidra address: 00edc9a0 */
/* Ghidra symbol: FUN_00edc9a0 */


void FUN_00edc9a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 local_118 [264];
  
  FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_118,0,&DAT_00edcda4,&DAT_00edcda8,
               in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  FUN_00414ff0(param_1 + 0xdf8,local_118);
  iVar2 = FUN_00414f50(param_1 + 0xdf8,&DAT_00edcdc8,(ulonglong)*(byte *)(param_1 + 0xdf8) + 1);
  if (iVar2 == 0) {
    FUN_016a4020(*(undefined8 *)(*(longlong *)(param_1 + 0xef8) + 0x10),1,param_1 + 0xdf8,0xffffffff
                );
  }
  else {
    iVar2 = FUN_00414f50(param_1 + 0xdf8,&DAT_00edcdcc,(ulonglong)*(byte *)(param_1 + 0xdf8) + 1);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_00414f50(param_1 + 0xdf8,&DAT_00edcdd0,(ulonglong)*(byte *)(param_1 + 0xdf8) + 1
                            ), iVar2 != 0)) {
      FUN_016b9df0(*(undefined8 *)(param_1 + 0xef8));
      iVar2 = FUN_00414f50(param_1 + 0xdf8,&DAT_00edcdd0,(ulonglong)*(byte *)(param_1 + 0xdf8) + 1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xdf8) = 0x4e494c03;
      }
    }
    FUN_00edb780(param_1,local_118);
    FUN_00414ff0(*(longlong *)(param_1 + 0xef8) + 0xc80,local_118);
    FUN_016ba220(*(undefined8 *)(param_1 + 0xef8),local_118,&DAT_00edcdd4,1);
    FUN_00414ff0(param_1 + 0xcf8,local_118);
    iVar2 = FUN_00414f50(param_1 + 0xcf8,&LAB_00edcdf4,(ulonglong)*(byte *)(param_1 + 0xcf8) + 1);
    if (iVar2 == 0) {
      uVar4 = FUN_016bade0(*(undefined8 *)(param_1 + 0xef8));
      *(undefined8 *)(param_1 + 0xcf0) = uVar4;
      uVar4 = FUN_016b9cb0(*(undefined8 *)(param_1 + 0xef8));
      FUN_014e4a20(*(longlong *)(param_1 + 0xef8) + 0xc80,*(undefined8 *)(param_1 + 0xcf0),uVar4);
      while (cVar1 = FUN_016b9d70(*(undefined8 *)(param_1 + 0xef8)), cVar1 == '\0') {
        uVar4 = FUN_016bade0(*(undefined8 *)(param_1 + 0xef8));
        *(undefined8 *)(param_1 + 0xcf0) = uVar4;
        uVar4 = FUN_016b9cb0(*(undefined8 *)(param_1 + 0xef8));
        FUN_014e4b90(*(undefined8 *)(param_1 + 0xf40),*(longlong *)(param_1 + 0xef8) + 0xc80,
                     *(undefined8 *)(param_1 + 0xcf0),uVar4);
      }
      uVar4 = FUN_016b9cb0(*(undefined8 *)(param_1 + 0xef8));
      FUN_014e4c70(*(undefined8 *)(param_1 + 0xf40),*(longlong *)(param_1 + 0xef8) + 0xc80,uVar4);
    }
    else {
      uVar4 = FUN_016bade0(*(undefined8 *)(param_1 + 0xef8));
      *(undefined8 *)(param_1 + 0xcf0) = uVar4;
      uVar4 = FUN_016bade0(*(undefined8 *)(param_1 + 0xef8));
      *(undefined8 *)(param_1 + 0xce8) = uVar4;
      iVar2 = FUN_00414f50(param_1 + 0xdf8,&DAT_00edcdcc,(ulonglong)*(byte *)(param_1 + 0xdf8) + 1);
      if (iVar2 == 0) {
        uVar4 = FUN_016bade0(*(undefined8 *)(param_1 + 0xef8));
        *(undefined8 *)(param_1 + 0xce0) = uVar4;
      }
      else {
        uVar3 = FUN_016baff0(*(undefined8 *)(param_1 + 0xef8),1,0x7fffffff);
        *(undefined4 *)(param_1 + 0xcdc) = uVar3;
      }
      iVar2 = FUN_00414f50(param_1 + 0xdf8,&DAT_00edcdcc,(ulonglong)*(byte *)(param_1 + 0xdf8) + 1);
      if ((iVar2 != 0) || (*(double *)(param_1 + 0xcf0) == *(double *)(param_1 + 0xce8))) {
        iVar2 = FUN_00414f50(param_1 + 0xdf8,&DAT_00edcdd0,(ulonglong)*(byte *)(param_1 + 0xdf8) + 1
                            );
        if ((iVar2 != 0) ||
           ((*(double *)(param_1 + 0xcf0) <= 0.0 ||
            (*(double *)(param_1 + 0xce8) < *(double *)(param_1 + 0xcf0) ||
             *(double *)(param_1 + 0xce8) == *(double *)(param_1 + 0xcf0))))) {
          FUN_016a4020(*(undefined8 *)(*(longlong *)(param_1 + 0xef8) + 0x10),0x1d,param_1 + 0xbdc,
                       0xffffffff);
          return;
        }
      }
      uVar4 = FUN_016b9cb0(*(undefined8 *)(param_1 + 0xef8));
      FUN_014e46f0(*(undefined8 *)(param_1 + 0xf40),*(longlong *)(param_1 + 0xef8) + 0xc80,
                   param_1 + 0xdf8,*(undefined8 *)(param_1 + 0xcf0),*(undefined8 *)(param_1 + 0xce8)
                   ,*(undefined8 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xcdc),uVar4);
    }
  }
  return;
}

