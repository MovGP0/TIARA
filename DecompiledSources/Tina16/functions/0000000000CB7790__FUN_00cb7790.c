/* Ghidra address: 00cb7790 */
/* Ghidra symbol: FUN_00cb7790 */


char FUN_00cb7790(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  byte *local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = (byte *)0x0;
  FUN_00419260(&local_20,&DAT_0086e978,1,6);
  cVar2 = FUN_00c8fa10(param_2[0x2b],param_3);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x188))(param_2,&local_20,2,0);
    bVar1 = local_20[1];
    if (bVar1 != 0x5a) {
      if (bVar1 == 0x5b) {
        FUN_0041ddd0(local_30,PTR_PTR_02003740);
        uVar3 = FUN_0086dfd0(&PTR_FUN_00ca71d8,1,local_30[0]);
        FUN_004134c0(uVar3);
      }
      else if (bVar1 == 0x5c) {
        FUN_0041ddd0(&local_38,PTR_PTR_02001e20);
        uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7328,1,local_38);
        FUN_004134c0(uVar3);
      }
      else if (bVar1 == 0x5d) {
        FUN_0041ddd0(&local_40,PTR_PTR_02004148);
        uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7480,1,local_40);
        FUN_004134c0(uVar3);
      }
      else {
        FUN_0041ddd0(&local_48,PTR_PTR_02004140);
        uVar3 = FUN_0086dfd0(&PTR_FUN_00ca75d8,1,local_48);
        FUN_004134c0(uVar3);
      }
    }
    (**(code **)(*param_2 + 0x188))(param_2,&local_20,6,0);
    uVar3 = 0;
    FUN_008783b0(&local_50,local_20,2);
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),(ushort)*local_20);
    FUN_00c8f680(param_2[0x2b],local_50,
                 CONCAT22((short)((ulonglong)uVar3 >> 8),
                          (short)((int)uVar3 << 8) + (ushort)local_20[1]),0);
  }
  FUN_00414560(&local_50,5);
  FUN_00419430(&local_20,&DAT_0086e978);
  return cVar2;
}

