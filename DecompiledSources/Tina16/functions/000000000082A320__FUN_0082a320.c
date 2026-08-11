/* Ghidra address: 0082a320 */
/* Ghidra symbol: FUN_0082a320 */


void FUN_0082a320(longlong *param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  
  uVar2 = FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  uVar4 = (undefined1)((ushort)param_2 >> 8);
  if (*(char *)((longlong)param_1 + 0x329) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x329) = 0;
    if ((((param_4 < 0) || (uVar2 = FUN_0064d0b0(param_1), (int)uVar2 <= param_4)) || (param_5 < 0))
       || (uVar2 = FUN_0064d120(param_1), (int)uVar2 < param_5)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((int)param_1[99] == 0) {
      *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
      *(undefined1 *)((longlong)param_1 + 0x339) = 0;
      if (bVar1) {
        if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
                   (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) {
          (**(code **)(*param_1 + 0x180))(param_1);
        }
      }
    }
    else if (bVar1) {
      FUN_0082a6c0(param_1,CONCAT11(uVar4,(char)param_1[0x65] == '\0'));
      if ((char)param_1[0x65] != '\0') {
        (**(code **)(*param_1 + 0x188))(param_1);
      }
    }
    else {
      if ((char)param_1[0x65] != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x33a) = 3;
      }
      (**(code **)(*param_1 + 0x188))(param_1);
    }
    if (bVar1) {
      pcVar3 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar3)(param_1);
    }
    FUN_0082a140(param_1);
    return;
  }
  return;
}

