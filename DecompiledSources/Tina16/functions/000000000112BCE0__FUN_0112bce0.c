/* Ghidra address: 0112bce0 */
/* Ghidra symbol: FUN_0112bce0 */


undefined8 FUN_0112bce0(undefined2 *param_1)

{
  ushort uVar1;
  
  if (((((((ushort)param_1[1] < 0xd) &&
         (uVar1 = FUN_005bb9e0(*param_1,param_1[1]), (ushort)param_1[2] <= uVar1)) &&
        ((ushort)param_1[3] < 0x18)) && (((ushort)param_1[4] < 0x3c && ((ushort)param_1[5] < 0x3c)))
       ) && (((short)param_1[8] < 0xf && ((-0xd < (short)param_1[8] && ((short)param_1[9] < 0x3c))))
            )) && ((param_1[8] != 0xe || ((short)param_1[9] < 1)))) {
    return 1;
  }
  return 0;
}

