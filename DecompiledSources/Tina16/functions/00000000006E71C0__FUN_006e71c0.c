/* Ghidra address: 006e71c0 */
/* Ghidra symbol: FUN_006e71c0 */


byte FUN_006e71c0(undefined8 param_1)

{
  byte bVar1;
  undefined1 local_8c [8];
  uint local_84;
  
  FUN_006e6ea0(param_1,local_8c);
  bVar1 = (local_84 & 1) != 0;
  if ((local_84 & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((local_84 & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((local_84 & 8) != 0) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}

