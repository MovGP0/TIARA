/* Ghidra address: 0095e960 */
/* Ghidra symbol: FUN_0095e960 */


byte FUN_0095e960(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_28;
  byte local_19 [9];
  
  local_28 = 0;
  local_19[0] = 0;
  cVar1 = FUN_0095e880(param_1);
  if ((cVar1 == '\x01') && ((char)param_1[0xc] == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 == '\0') {
      local_19[0] = 0x5d;
    }
    else {
      uVar2 = FUN_00414520(&local_28);
      (*(code *)*param_2)(param_2[1],(char)param_1[8],param_1[5],param_1[9],param_1[0xb],uVar2,
                          local_19);
      if (local_19[0] < 0xa0) {
        bVar3 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_19[0] >> 3] >> (local_19[0] & 7) &
                1) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_0095ea70(param_1,local_28);
      }
    }
  }
  FUN_00414520(&local_28);
  return local_19[0];
}

