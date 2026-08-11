/* Ghidra address: 018c9bc0 */
/* Ghidra symbol: FUN_018c9bc0 */


void FUN_018c9bc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  longlong local_30 [4];
  
  local_30[0] = 0;
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128) + 0x1c0) == '\0') ||
     (lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x1a8),
     *(char *)(lVar1 + 0x10) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  cVar2 = FUN_018c79b0(*(undefined8 *)(param_1 + 0x40),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128),uVar3);
  if (cVar2 != '\0') {
    FUN_018cacc0(*(undefined8 *)(param_1 + 0x40));
    FUN_018c8990(param_1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40);
    if (*(longlong *)(lVar1 + 0x3a8) == 0) {
      FUN_0043ea00(local_30,*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128) + 0x1f8));
      if (local_30[0] == 0) {
        FUN_018c8f10(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128));
      }
      else {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128);
        FUN_01973030(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40),lVar1,
                     *(undefined8 *)(lVar1 + 0x1f8),0);
      }
    }
    else {
      (**(code **)(lVar1 + 0x3a8))
                (*(undefined8 *)(lVar1 + 0x3b0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xda) = 1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128);
    if ((*(char *)(lVar1 + 0x1a1) != '\0') || (*(char *)(lVar1 + 0x1a2) != '\0')) {
      if (*(char *)(lVar1 + 0x1a2) == '\0') {
        dVar5 = *(double *)(lVar1 + 0x238) * *(double *)PTR_DAT_02002c30;
      }
      else {
        dVar5 = *(double *)(*(longlong *)(param_1 + 0x40) + 0x30) +
                *(double *)(lVar1 + 0x1a8) * *(double *)PTR_DAT_02002c30 +
                *(double *)(lVar1 + 0x1c8) * *(double *)PTR_DAT_02002c30;
      }
      if (*(char *)(lVar1 + 0x1a1) == '\0') {
        dVar4 = *(double *)(lVar1 + 0x228) * *(double *)PTR_DAT_02002c30;
      }
      else {
        dVar4 = (double)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x98))
                                  (*(longlong **)(param_1 + 0x40));
        *(double *)(*(longlong *)(param_1 + 0x40) + 0x28) =
             *(double *)(*(longlong *)(param_1 + 0x40) + 0x90) + dVar4;
        dVar4 = (double)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
                                  (*(longlong **)(param_1 + 0x40));
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128);
        dVar4 = dVar4 + *(double *)(lVar1 + 0x1e0) * *(double *)PTR_DAT_02002c30 +
                *(double *)(lVar1 + 0x178) * *(double *)PTR_DAT_02002c30;
      }
      FUN_018ba100(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128),dVar5,dVar4);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))(*(longlong **)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xda) = 0;
    FUN_018cd940(*(undefined8 *)(param_1 + 0x40),0,2);
  }
  FUN_00414480(local_30);
  return;
}

