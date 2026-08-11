/* Ghidra address: 00c01f70 */
/* Ghidra symbol: FUN_00c01f70 */


void FUN_00c01f70(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = (uint)param_2;
  if (uVar3 < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << ((byte)param_2 & 0x1f) & 0x3ffU)
            != 0;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (param_1[(longlong)(int)uVar3 + 0xac] != 0)) {
    iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
    if (*(int *)(param_1[(longlong)(int)uVar3 + 0xac] + 8) <= iVar2) {
      local_20 = *(undefined4 *)(param_1[(longlong)(int)uVar3 + 0xac] + 0xc);
      local_1c = *(undefined4 *)(param_1[(longlong)(int)uVar3 + 0xac] + 8);
      (**(code **)(*param_1 + 0x2b8))(param_1,0,&local_20);
      FUN_00c03730(param_1,1,0);
      cVar1 = FUN_00bf2c80(param_1);
      if (cVar1 != '\0') {
        FUN_00bf3bb0(param_1);
      }
      *(undefined4 *)((longlong)param_1 + 0x4b4) = *(undefined4 *)((longlong)param_1 + 0x4c4);
      *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((longlong)param_1 + 0x4cc);
      *(undefined8 *)((longlong)param_1 + 0x4bc) = *(undefined8 *)((longlong)param_1 + 0x4b4);
    }
  }
  return;
}

