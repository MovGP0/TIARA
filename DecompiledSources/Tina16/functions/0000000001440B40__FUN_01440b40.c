/* Ghidra address: 01440b40 */
/* Ghidra symbol: FUN_01440b40 */


void FUN_01440b40(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_180 [256];
  undefined8 local_80;
  undefined8 *local_78 [6];
  undefined1 local_41 [41];
  
  local_80 = 0;
  lVar2 = FUN_004095c0(0xc0);
  if (lVar2 == 0) {
    FUN_00ef4260(1,param_3);
  }
  else {
    *(longlong *)(param_1 + 0xa8) = lVar2;
    iVar3 = 1;
    do {
      *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar3 * 0x40) = 0;
      *(short *)(lVar2 + -0x40 + (longlong)iVar3 * 0x40) = *(short *)(param_3 + 0x10) + (short)iVar3
      ;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 3;
    local_78[0] = (undefined8 *)FUN_01cfd6a0(param_2);
    iVar3 = 0;
    do {
      cVar1 = FUN_01cfd030(param_2,iVar3);
      if (cVar1 == '\x03') {
        *(undefined8 *)(lVar2 + -0x38 + (longlong)(iVar3 + 1) * 0x40) = *local_78[0];
        FUN_00b909d0(local_78,0x10);
      }
      else if (cVar1 == '\x06') {
        *(undefined8 *)(lVar2 + -0x38 + (longlong)(iVar3 + 1) * 0x40) = *local_78[0];
        FUN_00b909d0(local_78,0x28);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 3);
    (**(code **)(*param_2 + 0x288))(param_2,&local_80);
    FUN_00416910(local_180,local_80,0xff);
    FUN_00415020(local_41,local_180,0x28);
    FUN_01440920(local_41,lVar2 + 0x10,lVar2 + 0x50,lVar2 + 0x90);
  }
  FUN_00414480(&local_80);
  return;
}

