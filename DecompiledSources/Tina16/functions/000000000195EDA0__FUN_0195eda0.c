/* Ghidra address: 0195eda0 */
/* Ghidra symbol: FUN_0195eda0 */


undefined1 FUN_0195eda0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c [7];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_51 = 0;
  if ((param_3 != 0) && ((*(ushort *)((longlong)param_1 + 0x38c) & 0x2000) == 0)) {
    (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],local_40,0);
    FUN_004168b0(&local_48,local_40[0]);
    cVar2 = FUN_0043fc80(local_48,local_2c);
    if (cVar2 != '\0') {
      *(ushort *)((longlong)param_1 + 0x38c) = *(ushort *)((longlong)param_1 + 0x38c) | 0x2000;
      if (((char)param_1[0x65] == '\x02') && (*(int *)(param_3 + 0x28) == local_2c[0])) {
        (**(code **)(*param_1 + 0x358))(param_1,0);
      }
      else {
        FUN_019801e0(param_3,&local_50,local_2c[0]);
        (**(code **)(*param_1 + 0x358))(param_1,local_50);
      }
      plVar1 = *(longlong **)(param_3 + 0x30);
      if (*(byte *)(param_1 + 0x65) < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                 (*(byte *)(param_1 + 0x65) & 0x1f) & 0xeU) != 0;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(int *)(param_3 + 0x28) == local_2c[0])) {
        if ((plVar1 != (longlong *)0x0) && ((char)param_1[0x65] == '\x03')) {
          dVar4 = (double)FUN_01950860(param_1);
          dVar5 = (double)FUN_01950860(plVar1);
          (**(code **)(*plVar1 + 0xe0))(plVar1,(dVar4 - dVar5) + (double)param_1[0x16]);
        }
        if ((char)param_1[0x65] != '\x02') {
          local_51 = 1;
        }
      }
      if (*(int *)(param_3 + 0x28) != local_2c[0]) {
        *(longlong **)(param_3 + 0x30) = param_1;
      }
      *(int *)(param_3 + 0x28) = local_2c[0];
    }
  }
  FUN_00414520(&local_50);
  FUN_00414480(&local_48);
  FUN_00414520(local_40);
  return local_51;
}

