/* Ghidra address: 005fd710 */
/* Ghidra symbol: FUN_005fd710 */


longlong * FUN_005fd710(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  *param_1 = DAT_01decf30;
  param_1[1] = DAT_01decf38;
  param_1[2] = DAT_01decf40;
  param_1[3] = DAT_01decf48;
  if (param_2 != 0) {
    iVar1 = thunk_FUN_03d2c01a(param_2,0x10,&local_38);
    if (iVar1 != 0) {
      if (local_38 == 0) {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else if (local_38 == 1) {
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else if (local_38 == 3) {
        if (param_1[2] == 0) {
          lVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
          param_1[2] = lVar2;
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
        FUN_0060b650(param_1[2],local_30);
      }
      else {
        *(char *)(param_1 + 3) = (char)local_30 + '\x02';
      }
      *(undefined4 *)(param_1 + 1) = local_34;
      *param_1 = param_2;
    }
  }
  return param_1;
}

